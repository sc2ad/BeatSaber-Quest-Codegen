#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferBase.InitializeBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferBase::*)(int32_t, ::StringW, bool, bool)>(&::HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x203a364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase>::get(),
                            "InitializeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferBase::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203a380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferBase::__set__id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_LoadBufferBase::__get__id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferBase::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_LoadBufferBase::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferBase::__set__bInstanced(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstanced() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferBase::__set__bInstancer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstancer() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferBase::__set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GeneratedOutput, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_GeneratedOutput>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput ::HoudiniEngineUnity::HEU_LoadBufferBase::__get__generatedOutput() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GeneratedOutput, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer(int32_t id, ::StringW name, bool bInstanced, bool bInstancer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase>::get(),
                            "InitializeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, name, bInstanced, bInstancer);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_LoadBufferBase::HEU_LoadBufferBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_LoadBufferBase>())) {}
 void ::HoudiniEngineUnity::HEU_LoadBufferBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
