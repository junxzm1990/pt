// added by JX
#ifndef __PT_H__
#define __PT_H__ 

#include <linux/sched.h>

#define MSR_IA32_PT_CTL 0x00000570
#define MSR_IA32_PT_STATUS 0x00000571

#define MSR_IA32_PT_OUTPUT_BASE 0x0000560
#define MSR_IA32_PT_OUTPUT_MASK_PTRS 0x00000561

#define TRACE_EN        BIT_ULL(0)
#define CYC_EN          BIT_ULL(1)
#define CTL_OS          BIT_ULL(2)
#define CTL_USER        BIT_ULL(3)
#define PT_ERROR        BIT_ULL(4)
#define CR3_FILTER      BIT_ULL(7)
#define TO_PA           BIT_ULL(8)
#define MTC_EN          BIT_ULL(9)
#define TSC_EN          BIT_ULL(10)
#define DIS_RETC        BIT_ULL(11)
#define BRANCH_EN       BIT_ULL(13)
#define MTC_MASK        (0xf << 14)
#define CYC_MASK        (0xf << 19)
#define PSB_MASK        (0xf << 24)
#define ADDR0_SHIFT     32
#define ADDR1_SHIFT     32
#define ADDR0_MASK      (0xfULL << ADDR0_SHIFT)
#define ADDR1_MASK      (0xfULL << ADDR1_SHIFT)

#define SIZE_BY_ORDER(order) ((1U << order) * PAGE_SIZE)



int pause_pt(u64 *val);
int start_pt(u64 val);
void init_pt_status(void);
int copy_pt(struct task_struct * tsk);

#endif

//end adding by JX
