// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.MediaTypeHeaderValue
#include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::MediaTypeHeaderValue::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::MediaTypeHeaderValue::$$c*, "System.Net.Http.Headers", "MediaTypeHeaderValue/<>c");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.MediaTypeHeaderValue/System.Net.Http.Headers.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MediaTypeHeaderValue::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Http.Headers.MediaTypeHeaderValue/System.Net.Http.Headers.<>c <>9
    static ::System::Net::Http::Headers::MediaTypeHeaderValue::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.Headers.MediaTypeHeaderValue/System.Net.Http.Headers.<>c <>9
    static void _set_$$9(::System::Net::Http::Headers::MediaTypeHeaderValue::$$c* value);
    // Get static field: static public System.Predicate`1<System.Net.Http.Headers.NameValueHeaderValue> <>9__6_0
    static ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* _get_$$9__6_0();
    // Set static field: static public System.Predicate`1<System.Net.Http.Headers.NameValueHeaderValue> <>9__6_0
    static void _set_$$9__6_0(::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);
    // static private System.Void .cctor()
    // Offset: 0x19D5340
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x19D53A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaTypeHeaderValue::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::MediaTypeHeaderValue::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaTypeHeaderValue::$$c*, creationType>()));
    }
    // System.Boolean <get_CharSet>b__6_0(System.Net.Http.Headers.NameValueHeaderValue l)
    // Offset: 0x19D53AC
    bool $get_CharSet$b__6_0(::System::Net::Http::Headers::NameValueHeaderValue* l);
  }; // System.Net.Http.Headers.MediaTypeHeaderValue/System.Net.Http.Headers.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeHeaderValue::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::MediaTypeHeaderValue::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::MediaTypeHeaderValue::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeHeaderValue::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeHeaderValue::$$c::$get_CharSet$b__6_0
// Il2CppName: <get_CharSet>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::MediaTypeHeaderValue::$$c::*)(::System::Net::Http::Headers::NameValueHeaderValue*)>(&System::Net::Http::Headers::MediaTypeHeaderValue::$$c::$get_CharSet$b__6_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueHeaderValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::MediaTypeHeaderValue::$$c*), "<get_CharSet>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
