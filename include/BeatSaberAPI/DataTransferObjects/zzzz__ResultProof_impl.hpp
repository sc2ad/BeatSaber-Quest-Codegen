#pragma once
namespace {
#include "BeatSaberAPI/DataTransferObjects/zzzz__ResultProof_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof.get_proof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaberAPI::DataTransferObjects::ResultProof::*)()>(&::BeatSaberAPI::DataTransferObjects::ResultProof::get_proof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d735c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            "get_proof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof.set_proof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::ResultProof::*)(::StringW)>(&::BeatSaberAPI::DataTransferObjects::ResultProof::set_proof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            "set_proof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::ResultProof::*)()>(&::BeatSaberAPI::DataTransferObjects::ResultProof::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d736c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::BeatSaberAPI::DataTransferObjects::ResultProof::__set__proof_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::ResultProof::__get__proof_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::BeatSaberAPI::DataTransferObjects::ResultProof::get_proof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            "get_proof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::BeatSaberAPI::DataTransferObjects::ResultProof::set_proof(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            "set_proof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::BeatSaberAPI::DataTransferObjects::ResultProof::ResultProof()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResultProof>())) {}
 void ::BeatSaberAPI::DataTransferObjects::ResultProof::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
