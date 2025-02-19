#if !defined (PWMIF_H)
# define PWMIF_H














void PwnIf_Main();

void PwnIf_Start();

void PwnIf_SetDuty(uint8 PwmCh,uint8 Duty);

#endif /* PWMIF_H */