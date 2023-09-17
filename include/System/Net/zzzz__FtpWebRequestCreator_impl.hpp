#pragma once
namespace {
#include "System/Net/zzzz__FtpWebRequestCreator_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::FtpWebRequestCreator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequestCreator::*)()>(&::System::Net::FtpWebRequestCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2809558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequestCreator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequestCreator.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest (::System::Net::FtpWebRequestCreator::*)(::System::Uri)>(&::System::Net::FtpWebRequestCreator::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2809560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequestCreator>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Net::IWebRequestCreate
constexpr  ::System::Net::FtpWebRequestCreator::operator ::System::Net::IWebRequestCreate() const noexcept {
return ::System::Net::IWebRequestCreate(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::FtpWebRequestCreator::FtpWebRequestCreator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FtpWebRequestCreator>())) {}
 void ::System::Net::FtpWebRequestCreator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequestCreator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebRequest ::System::Net::FtpWebRequestCreator::Create(::System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequestCreator>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest, false>(const_cast<void*>(instance), ___internal_method, uri);
}
} // end anonymous namespace
