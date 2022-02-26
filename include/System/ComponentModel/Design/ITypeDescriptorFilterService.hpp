// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Forward declaring type: ITypeDescriptorFilterService
  class ITypeDescriptorFilterService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Design::ITypeDescriptorFilterService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::ITypeDescriptorFilterService*, "System.ComponentModel.Design", "ITypeDescriptorFilterService");
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.ITypeDescriptorFilterService
  // [TokenAttribute] Offset: FFFFFFFF
  class ITypeDescriptorFilterService {
    public:
    // public System.Boolean FilterAttributes(System.ComponentModel.IComponent component, System.Collections.IDictionary attributes)
    // Offset: 0xFFFFFFFF
    bool FilterAttributes(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* attributes);
    // public System.Boolean FilterEvents(System.ComponentModel.IComponent component, System.Collections.IDictionary events)
    // Offset: 0xFFFFFFFF
    bool FilterEvents(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* events);
    // public System.Boolean FilterProperties(System.ComponentModel.IComponent component, System.Collections.IDictionary properties)
    // Offset: 0xFFFFFFFF
    bool FilterProperties(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* properties);
  }; // System.ComponentModel.Design.ITypeDescriptorFilterService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes
// Il2CppName: FilterAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Design::ITypeDescriptorFilterService::*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IComponent")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::ITypeDescriptorFilterService*), "FilterAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents
// Il2CppName: FilterEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Design::ITypeDescriptorFilterService::*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IComponent")->byval_arg;
    static auto* events = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::ITypeDescriptorFilterService*), "FilterEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, events});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties
// Il2CppName: FilterProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Design::ITypeDescriptorFilterService::*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IComponent")->byval_arg;
    static auto* properties = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::ITypeDescriptorFilterService*), "FilterProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, properties});
  }
};
