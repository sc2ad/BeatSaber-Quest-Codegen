// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: EntityTagHeaderValue
  class EntityTagHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: RangeConditionHeaderValue
  class RangeConditionHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::RangeConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeConditionHeaderValue*, "System.Net.Http.Headers", "RangeConditionHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.RangeConditionHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class RangeConditionHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
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
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<::System::DateTimeOffset> Date;
    // private System.Net.Http.Headers.EntityTagHeaderValue <EntityTag>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Http::Headers::EntityTagHeaderValue* EntityTag;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::EntityTagHeaderValue*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    ::System::Nullable_1<::System::DateTimeOffset>& dyn_$Date$k__BackingField();
    // Get instance field reference: private System.Net.Http.Headers.EntityTagHeaderValue <EntityTag>k__BackingField
    ::System::Net::Http::Headers::EntityTagHeaderValue*& dyn_$EntityTag$k__BackingField();
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x195ED4C
    ::System::Nullable_1<::System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x195ED60
    void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);
    // public System.Net.Http.Headers.EntityTagHeaderValue get_EntityTag()
    // Offset: 0x195ED74
    ::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag();
    // private System.Void set_EntityTag(System.Net.Http.Headers.EntityTagHeaderValue value)
    // Offset: 0x195ED7C
    void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* value);
    // public System.Void .ctor(System.DateTimeOffset date)
    // Offset: 0x195EC18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeConditionHeaderValue* New_ctor(::System::DateTimeOffset date) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::RangeConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeConditionHeaderValue*, creationType>(date)));
    }
    // public System.Void .ctor(System.Net.Http.Headers.EntityTagHeaderValue entityTag)
    // Offset: 0x195ECB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeConditionHeaderValue* New_ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::RangeConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeConditionHeaderValue*, creationType>(entityTag)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x195ED84
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.RangeConditionHeaderValue parsedValue)
    // Offset: 0x195EF48
    static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RangeConditionHeaderValue*> parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x195ED8C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x195EEBC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x195F18C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.RangeConditionHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::get_Date
// Il2CppName: get_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&System::Net::Http::Headers::RangeConditionHeaderValue::get_Date)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "get_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::set_Date
// Il2CppName: set_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&System::Net::Http::Headers::RangeConditionHeaderValue::set_Date)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "set_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::get_EntityTag
// Il2CppName: get_EntityTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::EntityTagHeaderValue* (System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&System::Net::Http::Headers::RangeConditionHeaderValue::get_EntityTag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "get_EntityTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::set_EntityTag
// Il2CppName: set_EntityTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RangeConditionHeaderValue::*)(::System::Net::Http::Headers::EntityTagHeaderValue*)>(&System::Net::Http::Headers::RangeConditionHeaderValue::set_EntityTag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "EntityTagHeaderValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "set_EntityTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&System::Net::Http::Headers::RangeConditionHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::Http::Headers::RangeConditionHeaderValue*>)>(&System::Net::Http::Headers::RangeConditionHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "RangeConditionHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::RangeConditionHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::RangeConditionHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&System::Net::Http::Headers::RangeConditionHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RangeConditionHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::RangeConditionHeaderValue::*)()>(&System::Net::Http::Headers::RangeConditionHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RangeConditionHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
