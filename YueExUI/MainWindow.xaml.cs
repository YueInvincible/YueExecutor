using System;
using System.IO;
using System.Windows;

namespace YueExUI
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void BtnInject_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                // In a real scenario, this path would be determined dynamically (e.g. adjacent to the exe)
                string dllPath = Path.GetFullPath(@"..\target\debug\yueex_dll.dll");
                
                YueExError err = YueExEngine.YueEx_Inject(dllPath);
                if (err == YueExError.Success)
                {
                    err = YueExEngine.YueEx_InitializeIpc();
                    if (err == YueExError.Success)
                    {
                        TxtStatus.Text = "Status: Injected and IPC Ready";
                        TxtStatus.Foreground = System.Windows.Media.Brushes.LightGreen;
                    }
                    else
                    {
                        TxtStatus.Text = $"Status: IPC Init Failed ({err})";
                        TxtStatus.Foreground = System.Windows.Media.Brushes.Red;
                    }
                }
                else
                {
                    TxtStatus.Text = $"Status: Injection Failed ({err})";
                    TxtStatus.Foreground = System.Windows.Media.Brushes.Red;
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Injection Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }
        }

        private void BtnExecute_Click(object sender, RoutedEventArgs e)
        {
            string script = TxtScript.Text;
            if (string.IsNullOrWhiteSpace(script)) return;

            try
            {
                var result = YueExEngine.ExecuteLuau(script);
                
                string timeInfo = $"[Elapsed: {result.ElapsedUs} µs]";
                if (result.Success)
                {
                    TxtOutput.Text += $"{timeInfo} SUCCESS\n{result.Output}\n";
                }
                else
                {
                    TxtOutput.Text += $"{timeInfo} ERROR\n{result.Error}\n";
                }
                TxtOutput.ScrollToEnd();
            }
            catch (Exception ex)
            {
                TxtOutput.Text += $"[FATAL IPC ERROR]\n{ex.Message}\n";
            }
        }
    }
}