void klongPlotting() {
    // Create a canvas
    TCanvas *c1 = new TCanvas("c1", "K+ n", 800, 600);

    // Define the function you want to plot. In this case, f(x) = ax
    TF1 *kayonScatteringAngle = new TF1("kayonScatteringAngle", "[0]*acos(-(0.497**2 + sqrt(0.2**2+0.497**2)*0.938 - sqrt(0.2**2+0.497**2)*sqrt(x**2+0.497**2)-sqrt(x**2+0.497**2)*0.938)/(0.2*x))*180./3.14", 0.07, 0.2)", 0, 10);

    // Array of 'a' values (1xn array)
    double a_values[] = {1, 2, 3, 4, 5};
    int n = sizeof(a_values) / sizeof(double);

    // Loop over array to plot function with different 'a' values
    for (int i = 0; i < n; ++i) {
        kayonScatteringAngle->SetParameter(0, a_values[i]); // Set 'a' value
        kayonScatteringAngle->SetLineColor(i+1);            // Change line color for visibility
        kayonScatteringAngle->DrawCopy(i == 0 ? "" : "same"); // Draw on the same canvas
    }

    // Show the canvas
    c1->Draw();
}
