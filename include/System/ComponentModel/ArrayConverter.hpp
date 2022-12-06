// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.CollectionConverter
#include "System/ComponentModel/CollectionConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ArrayConverter
  class ArrayConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArrayConverter*, "System.ComponentModel", "ArrayConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ArrayConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayConverter : public ::System::ComponentModel::CollectionConverter {
    public:
    // Nested type: ::System::ComponentModel::ArrayConverter::ArrayPropertyDescriptor
    class ArrayPropertyDescriptor;
    // public System.Void .ctor()
    // Offset: 0x1E17BE4
    // Implemented from: System.ComponentModel.CollectionConverter
    // Base method: System.Void CollectionConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ArrayConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayConverter*, creationType>()));
    }
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x1E1757C
    // Implemented from: System.ComponentModel.CollectionConverter
    // Base method: System.Object CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public override System.ComponentModel.PropertyDescriptorCollection GetProperties(System.ComponentModel.ITypeDescriptorContext context, System.Object value, System.Attribute[] attributes)
    // Offset: 0x1E178D4
    // Implemented from: System.ComponentModel.CollectionConverter
    // Base method: System.ComponentModel.PropertyDescriptorCollection CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext context, System.Object value, System.Attribute[] attributes)
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::Il2CppObject* value, ::ArrayW<::System::Attribute*> attributes);
    // public override System.Boolean GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x1E17BDC
    // Implemented from: System.ComponentModel.CollectionConverter
    // Base method: System.Boolean CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext context)
    bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);
  }; // System.ComponentModel.ArrayConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::ArrayConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArrayConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::Il2CppObject*, ::ArrayW<::System::Attribute*>)>(&System::ComponentModel::ArrayConverter::GetProperties)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArrayConverter*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value, attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::GetPropertiesSupported
// Il2CppName: GetPropertiesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::ArrayConverter::GetPropertiesSupported)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArrayConverter*), "GetPropertiesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
