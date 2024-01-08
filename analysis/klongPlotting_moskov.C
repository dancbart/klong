//{
// auto fa1 = new TF1("fa1","sin(x)/x",0,10);
// fa1->Draw();
//}

//return;

{   
TCanvas *c1 = new TCanvas("c1","",500,500);
  c1->Divide(1.2);
  c1->cd(1);
    TF1("fa1", "acos(-(0.497**2 + sqrt(0.2**2+0.497**2)*0.938 - sqrt(0.2**2+0.497**2)*sqrt(x**2+0.497**2)-sqrt(x**2+0.497**2)*0.938)/(0.2*x))*180./3.14", 0.07, 0.2);
    fa1->Draw();
}


