#pragma once
#include "System/zzzz__Exception_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniEngineError_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2016b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2016b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2016c24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_HoudiniEngineError),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_HoudiniEngineError::__set__errorMsg(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniEngineError::__get__errorMsg() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_HoudiniEngineError::HEU_HoudiniEngineError()  : ::System::Exception(THROW_UNLESS(::il2cpp_utils::New<HEU_HoudiniEngineError>())) {}
 void ::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "errorMsg", ty: "::StringW", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::HEU_HoudiniEngineError::HEU_HoudiniEngineError(::StringW errorMsg)  : ::System::Exception(THROW_UNLESS(::il2cpp_utils::New<HEU_HoudiniEngineError>(errorMsg))) {}
 void ::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor(::StringW errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, errorMsg);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniEngineError::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
