// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: BooleanConverter
  class BooleanConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::BooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BooleanConverter*, "System.ComponentModel", "BooleanConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.BooleanConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BooleanConverter : public ::System::ComponentModel::TypeConverter {
    public:
    // Get static field: static private System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection values
    static ::System::ComponentModel::TypeConverter::StandardValuesCollection* _get_values();
    // Set static field: static private System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection values
    static void _set_values(::System::ComponentModel::TypeConverter::StandardValuesCollection* value);
    // public System.Void .ctor()
    // Offset: 0x1E19BD4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BooleanConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::BooleanConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BooleanConverter*, creationType>()));
    }
    // public override System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0x1E196F0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public override System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0x1E19790
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public override System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x1E199B0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x1E19BC4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x1E19BCC
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);
  }; // System.ComponentModel.BooleanConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::BooleanConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BooleanConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::BooleanConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BooleanConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::GetStandardValues
// Il2CppName: GetStandardValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter::StandardValuesCollection* (System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::BooleanConverter::GetStandardValues)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BooleanConverter*), "GetStandardValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::GetStandardValuesExclusive
// Il2CppName: GetStandardValuesExclusive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::BooleanConverter::GetStandardValuesExclusive)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BooleanConverter*), "GetStandardValuesExclusive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BooleanConverter::GetStandardValuesSupported
// Il2CppName: GetStandardValuesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::BooleanConverter::GetStandardValuesSupported)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BooleanConverter*), "GetStandardValuesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
