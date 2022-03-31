// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: ViaHeaderValue
  class ViaHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::ViaHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ViaHeaderValue*, "System.Net.Http.Headers", "ViaHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ViaHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ViaHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
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
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Comment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ProtocolName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW ProtocolName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ProtocolVersion>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW ProtocolVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ReceivedBy>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW ReceivedBy;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String <Comment>k__BackingField
    ::StringW& dyn_$Comment$k__BackingField();
    // Get instance field reference: private System.String <ProtocolName>k__BackingField
    ::StringW& dyn_$ProtocolName$k__BackingField();
    // Get instance field reference: private System.String <ProtocolVersion>k__BackingField
    ::StringW& dyn_$ProtocolVersion$k__BackingField();
    // Get instance field reference: private System.String <ReceivedBy>k__BackingField
    ::StringW& dyn_$ReceivedBy$k__BackingField();
    // public System.String get_Comment()
    // Offset: 0x19616EC
    ::StringW get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x19616F4
    void set_Comment(::StringW value);
    // public System.String get_ProtocolName()
    // Offset: 0x19616FC
    ::StringW get_ProtocolName();
    // private System.Void set_ProtocolName(System.String value)
    // Offset: 0x1961704
    void set_ProtocolName(::StringW value);
    // public System.String get_ProtocolVersion()
    // Offset: 0x196170C
    ::StringW get_ProtocolVersion();
    // private System.Void set_ProtocolVersion(System.String value)
    // Offset: 0x1961714
    void set_ProtocolVersion(::StringW value);
    // public System.String get_ReceivedBy()
    // Offset: 0x196171C
    ::StringW get_ReceivedBy();
    // private System.Void set_ReceivedBy(System.String value)
    // Offset: 0x1961724
    void set_ReceivedBy(::StringW value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x196172C
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ViaHeaderValue> result)
    // Offset: 0x1961900
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ViaHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x19619A0
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ViaHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
    // private System.Void .ctor()
    // Offset: 0x19616E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViaHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::ViaHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViaHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1961734
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1961830
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1961C20
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.ViaHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ViaHeaderValue), 40 + sizeof(::StringW)> __System_Net_Http_Headers_ViaHeaderValueSizeCheck;
  static_assert(sizeof(ViaHeaderValue) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_Comment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ViaHeaderValue::set_Comment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ProtocolName
// Il2CppName: get_ProtocolName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ProtocolName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ProtocolName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ProtocolName
// Il2CppName: set_ProtocolName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ViaHeaderValue::set_ProtocolName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ProtocolName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ProtocolVersion
// Il2CppName: set_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ViaHeaderValue::set_ProtocolVersion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ReceivedBy
// Il2CppName: get_ReceivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ReceivedBy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ReceivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ReceivedBy
// Il2CppName: set_ReceivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ViaHeaderValue::set_ReceivedBy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ReceivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue*>*>)>(&System::Net::Http::Headers::ViaHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ViaHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::ViaHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::ViaHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ViaHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ViaHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
