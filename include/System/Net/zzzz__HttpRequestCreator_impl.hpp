#pragma once
#include "System/Net/zzzz__HttpRequestCreator_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: System::Net::HttpRequestCreator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpRequestCreator::*)()>(&System::Net::HttpRequestCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28390f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpRequestCreator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpRequestCreator.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebRequest (System::Net::HttpRequestCreator::*)(System::Uri)>(&System::Net::HttpRequestCreator::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28390f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpRequestCreator>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Net::IWebRequestCreate
constexpr  System::Net::HttpRequestCreator::operator System::Net::IWebRequestCreate() const noexcept {
return System::Net::IWebRequestCreate(::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::HttpRequestCreator System::Net::HttpRequestCreator::New_ctor()  {
System::Net::HttpRequestCreator o{THROW_UNLESS(::il2cpp_utils::New<System::Net::HttpRequestCreator>())};
return o;
}
 void System::Net::HttpRequestCreator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpRequestCreator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::WebRequest System::Net::HttpRequestCreator::Create(System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpRequestCreator>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebRequest, false>(const_cast<void*>(instance), ___internal_method, uri);
}
