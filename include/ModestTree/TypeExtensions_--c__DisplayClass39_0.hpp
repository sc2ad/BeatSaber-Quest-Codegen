// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::TypeExtensions::$$c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions::$$c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeExtensions::$$c__DisplayClass39_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Type[] attributeTypes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Type*> attributeTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Type*>
    constexpr operator ::ArrayW<::System::Type*>() const noexcept {
      return attributeTypes;
    }
    // Get instance field reference: public System.Type[] attributeTypes
    ::ArrayW<::System::Type*>& dyn_attributeTypes();
    // System.Boolean <AllAttributes>b__0(System.Attribute a)
    // Offset: 0x16D2848
    bool $AllAttributes$b__0(::System::Attribute* a);
    // public System.Void .ctor()
    // Offset: 0x16D25FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$$c__DisplayClass39_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::$$c__DisplayClass39_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$$c__DisplayClass39_0*, creationType>()));
    }
  }; // ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_0
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$$c__DisplayClass39_0), 16 + sizeof(::ArrayW<::System::Type*>)> __ModestTree_TypeExtensions_$$c__DisplayClass39_0SizeCheck;
  static_assert(sizeof(TypeExtensions::$$c__DisplayClass39_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_0::$AllAttributes$b__0
// Il2CppName: <AllAttributes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::TypeExtensions::$$c__DisplayClass39_0::*)(::System::Attribute*)>(&ModestTree::TypeExtensions::$$c__DisplayClass39_0::$AllAttributes$b__0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Attribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$$c__DisplayClass39_0*), "<AllAttributes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
