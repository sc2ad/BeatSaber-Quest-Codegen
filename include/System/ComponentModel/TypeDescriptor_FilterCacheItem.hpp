// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel::Design
namespace System::ComponentModel::Design {
  // Forward declaring type: ITypeDescriptorFilterService
  class ITypeDescriptorFilterService;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::FilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::FilterCacheItem*, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/System.ComponentModel.FilterCacheItem
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::FilterCacheItem : public ::Il2CppObject {
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
    // private System.ComponentModel.Design.ITypeDescriptorFilterService _filterService
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::Design::ITypeDescriptorFilterService*) == 0x8);
    // System.Collections.ICollection FilteredMembers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ICollection* FilteredMembers;
    // Field size check
    static_assert(sizeof(::System::Collections::ICollection*) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.Design.ITypeDescriptorFilterService _filterService
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*& dyn__filterService();
    // Get instance field reference: System.Collections.ICollection FilteredMembers
    ::System::Collections::ICollection*& dyn_FilteredMembers();
    // System.Void .ctor(System.ComponentModel.Design.ITypeDescriptorFilterService filterService, System.Collections.ICollection filteredMembers)
    // Offset: 0x1CA3FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::FilterCacheItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::FilterCacheItem*, creationType>(filterService, filteredMembers)));
    }
    // System.Boolean IsValid(System.ComponentModel.Design.ITypeDescriptorFilterService filterService)
    // Offset: 0x1CA4010
    bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);
  }; // System.ComponentModel.TypeDescriptor/System.ComponentModel.FilterCacheItem
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::FilterCacheItem), 24 + sizeof(::System::Collections::ICollection*)> __System_ComponentModel_TypeDescriptor_FilterCacheItemSizeCheck;
  static_assert(sizeof(TypeDescriptor::FilterCacheItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::FilterCacheItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::FilterCacheItem::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeDescriptor::FilterCacheItem::*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(&System::ComponentModel::TypeDescriptor::FilterCacheItem::IsValid)> {
  static const MethodInfo* get() {
    static auto* filterService = &::il2cpp_utils::GetClassFromName("System.ComponentModel.Design", "ITypeDescriptorFilterService")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::FilterCacheItem*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filterService});
  }
};