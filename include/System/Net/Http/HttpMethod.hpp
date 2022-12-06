// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: HttpMethod
  class HttpMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::HttpMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMethod*, "System.Net.Http", "HttpMethod");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpMethod : public ::Il2CppObject/*, public ::System::IEquatable_1<::System::Net::Http::HttpMethod*>*/ {
    public:
    public:
    // private readonly System.String method
    // Size: 0x8
    // Offset: 0x10
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Net::Http::HttpMethod*>
    operator ::System::IEquatable_1<::System::Net::Http::HttpMethod*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Net::Http::HttpMethod*>*>(this);
    }
    // Creating interface conversion operator: i_HttpMethod
    inline ::System::IEquatable_1<::System::Net::Http::HttpMethod*>* i_HttpMethod() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::System::Net::Http::HttpMethod*>*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return method;
    }
    // Get static field: static private readonly System.Net.Http.HttpMethod delete_method
    static ::System::Net::Http::HttpMethod* _get_delete_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod delete_method
    static void _set_delete_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod get_method
    static ::System::Net::Http::HttpMethod* _get_get_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod get_method
    static void _set_get_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod head_method
    static ::System::Net::Http::HttpMethod* _get_head_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod head_method
    static void _set_head_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod options_method
    static ::System::Net::Http::HttpMethod* _get_options_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod options_method
    static void _set_options_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod post_method
    static ::System::Net::Http::HttpMethod* _get_post_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod post_method
    static void _set_post_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod put_method
    static ::System::Net::Http::HttpMethod* _get_put_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod put_method
    static void _set_put_method(::System::Net::Http::HttpMethod* value);
    // Get static field: static private readonly System.Net.Http.HttpMethod trace_method
    static ::System::Net::Http::HttpMethod* _get_trace_method();
    // Set static field: static private readonly System.Net.Http.HttpMethod trace_method
    static void _set_trace_method(::System::Net::Http::HttpMethod* value);
    // Get instance field reference: private readonly System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // static public System.Net.Http.HttpMethod get_Get()
    // Offset: 0x19DD1F4
    static ::System::Net::Http::HttpMethod* get_Get();
    // public System.String get_Method()
    // Offset: 0x19DD25C
    ::StringW get_Method();
    // static public System.Net.Http.HttpMethod get_Post()
    // Offset: 0x19DD264
    static ::System::Net::Http::HttpMethod* get_Post();
    // public System.Void .ctor(System.String method)
    // Offset: 0x19DD144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpMethod* New_ctor(::StringW method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpMethod*, creationType>(method)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19DD3D0
    static void _cctor();
    // public System.Boolean Equals(System.Net.Http.HttpMethod other)
    // Offset: 0x19DD2E4
    bool Equals(::System::Net::Http::HttpMethod* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19DD308
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19DD3A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19DD3C8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.HttpMethod
  #pragma pack(pop)
  static check_size<sizeof(HttpMethod), 16 + sizeof(::StringW)> __System_Net_Http_HttpMethodSizeCheck;
  static_assert(sizeof(HttpMethod) == 0x18);
  // static public System.Boolean op_Equality(System.Net.Http.HttpMethod left, System.Net.Http.HttpMethod right)
  // Offset: 0x19DD2CC
  bool operator ==(::System::Net::Http::HttpMethod* left, ::System::Net::Http::HttpMethod& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::get_Get
// Il2CppName: get_Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpMethod* (*)()>(&System::Net::Http::HttpMethod::get_Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "get_Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::HttpMethod::*)()>(&System::Net::Http::HttpMethod::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::get_Post
// Il2CppName: get_Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpMethod* (*)()>(&System::Net::Http::HttpMethod::get_Post)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "get_Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::HttpMethod::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpMethod::*)(::System::Net::Http::HttpMethod*)>(&System::Net::Http::HttpMethod::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpMethod::*)(::Il2CppObject*)>(&System::Net::Http::HttpMethod::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::HttpMethod::*)()>(&System::Net::Http::HttpMethod::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::HttpMethod::*)()>(&System::Net::Http::HttpMethod::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMethod*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMethod::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
