// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ValidationUtil
  class ValidationUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ValidationUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationUtil*, "Zenject", "ValidationUtil");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ValidationUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationUtil : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::ValidationUtil::$$c
    class $$c;
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(params System.Type[] argTypes)
    // Offset: 0x1CEE7E0
    static ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateDefaultArgs(::ArrayW<::System::Type*> argTypes);
  }; // Zenject.ValidationUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ValidationUtil::CreateDefaultArgs
// Il2CppName: CreateDefaultArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (*)(::ArrayW<::System::Type*>)>(&Zenject::ValidationUtil::CreateDefaultArgs)> {
  static const MethodInfo* get() {
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ValidationUtil*), "CreateDefaultArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argTypes});
  }
};
