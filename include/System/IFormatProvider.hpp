// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IFormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormatProvider*, "System", "IFormatProvider");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IFormatProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106CB20
  class IFormatProvider {
    public:
    // public System.Object GetFormat(System.Type formatType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetFormat(::System::Type* formatType);
  }; // System.IFormatProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IFormatProvider::GetFormat
// Il2CppName: GetFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IFormatProvider::*)(::System::Type*)>(&System::IFormatProvider::GetFormat)> {
  static const MethodInfo* get() {
    static auto* formatType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IFormatProvider*), "GetFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formatType});
  }
};
