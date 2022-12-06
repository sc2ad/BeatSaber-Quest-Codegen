// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.TypeStringFormatter
#include "ModestTree/TypeStringFormatter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::TypeStringFormatter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeStringFormatter::$$c*, "ModestTree", "TypeStringFormatter/<>c");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeStringFormatter/ModestTree.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeStringFormatter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ModestTree.TypeStringFormatter/ModestTree.<>c <>9
    static ::ModestTree::TypeStringFormatter::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.TypeStringFormatter/ModestTree.<>c <>9
    static void _set_$$9(::ModestTree::TypeStringFormatter::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static ::System::Func_2<::System::Type*, ::StringW>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static void _set_$$9__2_0(::System::Func_2<::System::Type*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x17AF260
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17AF2C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeStringFormatter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeStringFormatter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeStringFormatter::$$c*, creationType>()));
    }
    // System.String <PrettyNameInternal>b__2_0(System.Type t)
    // Offset: 0x17AF2CC
    ::StringW $PrettyNameInternal$b__2_0(::System::Type* t);
  }; // ModestTree.TypeStringFormatter/ModestTree.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::TypeStringFormatter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::$PrettyNameInternal$b__2_0
// Il2CppName: <PrettyNameInternal>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ModestTree::TypeStringFormatter::$$c::*)(::System::Type*)>(&ModestTree::TypeStringFormatter::$$c::$PrettyNameInternal$b__2_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter::$$c*), "<PrettyNameInternal>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
