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
  // Forward declaring type: ProductHeaderValue
  class ProductHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::ProductHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ProductHeaderValue*, "System.Net.Http.Headers", "ProductHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ProductHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ProductHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Version>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.String <Version>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Version$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x19A7F64
    ::StringW get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x19A7F6C
    void set_Name(::StringW value);
    // public System.String get_Version()
    // Offset: 0x19A7F74
    ::StringW get_Version();
    // System.Void set_Version(System.String value)
    // Offset: 0x19A7F7C
    void set_Version(::StringW value);
    // System.Void .ctor()
    // Offset: 0x19A7F5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::ProductHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductHeaderValue*, creationType>()));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19A7F84
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ProductHeaderValue> result)
    // Offset: 0x19A80C8
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ProductHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x19A8168
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ProductHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19A7F8C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19A8058
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19A82F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.ProductHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ProductHeaderValue), 24 + sizeof(::StringW)> __System_Net_Http_Headers_ProductHeaderValueSizeCheck;
  static_assert(sizeof(ProductHeaderValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ProductHeaderValue::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ProductHeaderValue::set_Version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*>)>(&System::Net::Http::Headers::ProductHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ProductHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::ProductHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::ProductHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ProductHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ProductHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ProductHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
