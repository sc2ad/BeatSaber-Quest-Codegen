#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsException::*)()>(&Org::BouncyCastle::Cms::CmsException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x114e07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsException::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x114e0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsException::*)(::StringW, System::Exception)>(&Org::BouncyCastle::Cms::CmsException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x114e13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Org::BouncyCastle::Cms::CmsException::CmsException()  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<CmsException>())) {}
 void Org::BouncyCastle::Cms::CmsException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsException::CmsException(::StringW msg)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<CmsException>(msg))) {}
 void Org::BouncyCastle::Cms::CmsException::_ctor(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsException::CmsException(::StringW msg, System::Exception e)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<CmsException>(msg, e))) {}
 void Org::BouncyCastle::Cms::CmsException::_ctor(::StringW msg, System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg, e);
}
