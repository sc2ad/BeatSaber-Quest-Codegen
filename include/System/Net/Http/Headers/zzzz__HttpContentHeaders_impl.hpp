#pragma once
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpContentHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
//  Writing Method size for method: System::Net::Http::Headers::HttpContentHeaders._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpContentHeaders::*)(System::Net::Http::HttpContent)>(&System::Net::Http::Headers::HttpContentHeaders::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26a0d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpContent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::HttpContentHeaders.get_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int64_t> (System::Net::Http::Headers::HttpContentHeaders::*)()>(&System::Net::Http::Headers::HttpContentHeaders::get_ContentLength)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x269e970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::HttpContentHeaders.get_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::MediaTypeHeaderValue (System::Net::Http::Headers::HttpContentHeaders::*)()>(&System::Net::Http::Headers::HttpContentHeaders::get_ContentType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26a18fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::HttpContentHeaders.set_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpContentHeaders::*)(System::Net::Http::Headers::MediaTypeHeaderValue)>(&System::Net::Http::Headers::HttpContentHeaders::set_ContentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a2f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "set_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::MediaTypeHeaderValue>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Http::Headers::HttpContentHeaders::__set_content(System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpContent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::HttpContent>(value));
}
constexpr System::Net::Http::HttpContent System::Net::Http::Headers::HttpContentHeaders::__get_content() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpContent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Http::Headers::HttpContentHeaders System::Net::Http::Headers::HttpContentHeaders::New_ctor(System::Net::Http::HttpContent content)  {
System::Net::Http::Headers::HttpContentHeaders o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::Headers::HttpContentHeaders>(content))};
return o;
}
 void System::Net::Http::Headers::HttpContentHeaders::_ctor(System::Net::Http::HttpContent content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpContent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, content);
}
 System::Nullable_1<int64_t> System::Net::Http::Headers::HttpContentHeaders::get_ContentLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Http::Headers::MediaTypeHeaderValue System::Net::Http::Headers::HttpContentHeaders::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::Headers::MediaTypeHeaderValue, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::Headers::HttpContentHeaders::set_ContentType(System::Net::Http::Headers::MediaTypeHeaderValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpContentHeaders>::get(),
                            "set_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::MediaTypeHeaderValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
