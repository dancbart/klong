void klongPlotting() {
    // Create a canvas
    TCanvas *c1 = new TCanvas("c1", "K+ n", 800, 600);

    // Define the function you want to plot. In this case, f(x) = ax
    TF1 *kayonScatteringAngle = new TF1("kayonScatteringAngle", "[0]*x", 0, 10);

    // Array of 'a' values (1xn array)
    double a_values[] = {1, 2, 3, 4, 5};
    int n = sizeof(a_values) / sizeof(double);

    // Loop over array to plot function with different 'a' values
    for (int i = 0; i < n; ++i) {
        f1->SetParameter(0, a_values[i]); // Set 'a' value
        f1->SetLineColor(i+1);            // Change line color for visibility
        f1->DrawCopy(i == 0 ? "" : "same"); // Draw on the same canvas
    }

    // Show the canvas
    c1->Draw();
}
