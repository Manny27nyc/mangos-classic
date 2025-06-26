/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
//---------------------------------------------------------------------------

#ifndef thOpenSourceH
#define thOpenSourceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class thOpenFile : public TThread
{
    private:
    protected:
        void __fastcall Execute();
        void __fastcall RunOpen();
    public:
        bool       thEnd;
        int   ColType[10000];

        __fastcall thOpenFile(bool CreateSuspended);
        void LoadAndModify(const char* pszFileName);
        void ReadAndModifyFromBuff(char* pBuff, DWORD dwSize, const char* pszFileName);

};
//---------------------------------------------------------------------------
#endif
