// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: CollectionExtensions
  class CollectionExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CollectionExtensions*, "System.Net.Http.Headers", "CollectionExtensions");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.CollectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CollectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean SequenceEqual(System.Collections.Generic.List`1<TSource> first, System.Collections.Generic.List`1<TSource> second)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TSource>
    static bool SequenceEqual(::System::Collections::Generic::List_1<TSource>* first, ::System::Collections::Generic::List_1<TSource>* second) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::CollectionExtensions::SequenceEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", "SequenceEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(first), ::il2cpp_utils::ExtractType(second)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, first, second);
    }
    // static public System.Void SetValue(System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters, System.String key, System.String value)
    // Offset: 0x19CBCA8
    static void SetValue(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters, ::StringW key, ::StringW value);
    // static public System.String ToString(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::StringW ToString(::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::CollectionExtensions::ToString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", "ToString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list);
    }
    // static public System.Void ToStringBuilder(System.Collections.Generic.List`1<T> list, System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void ToStringBuilder(::System::Collections::Generic::List_1<T>* list, ::System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::CollectionExtensions::ToStringBuilder");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", "ToStringBuilder", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(sb)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, sb);
    }
  }; // System.Net.Http.Headers.CollectionExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionExtensions::SequenceEqual
// Il2CppName: SequenceEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionExtensions::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, ::StringW, ::StringW)>(&System::Net::Http::Headers::CollectionExtensions::SetValue)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueHeaderValue")})->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CollectionExtensions*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters, key, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionExtensions::ToString
// Il2CppName: ToString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionExtensions::ToStringBuilder
// Il2CppName: ToStringBuilder
// Cannot write MetadataGetter for generic methods!
