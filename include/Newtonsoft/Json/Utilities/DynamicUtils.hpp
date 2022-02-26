// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: IDynamicMetaObjectProvider
  class IDynamicMetaObjectProvider;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: DynamicUtils
  class DynamicUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DynamicUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DynamicUtils*, "Newtonsoft.Json.Utilities", "DynamicUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.DynamicUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 1201E00
  // [NullableContextAttribute] Offset: 1201E00
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DynamicUtils : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper
    class BinderWrapper;
    // static public System.Collections.Generic.IEnumerable`1<System.String> GetDynamicMemberNames(System.Dynamic.IDynamicMetaObjectProvider dynamicProvider)
    // Offset: 0x19D46F4
    static ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider);
  }; // Newtonsoft.Json.Utilities.DynamicUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::GetDynamicMemberNames
// Il2CppName: GetDynamicMemberNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::System::Dynamic::IDynamicMetaObjectProvider*)>(&Newtonsoft::Json::Utilities::DynamicUtils::GetDynamicMemberNames)> {
  static const MethodInfo* get() {
    static auto* dynamicProvider = &::il2cpp_utils::GetClassFromName("System.Dynamic", "IDynamicMetaObjectProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils*), "GetDynamicMemberNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dynamicProvider});
  }
};
