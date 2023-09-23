#pragma once
#include "HoudiniEngineUnity/zzzz__Test_Terrain_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_Terrain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_Terrain::*)(UnityEngine::Terrain)>(&HoudiniEngineUnity::Test_Terrain::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2076904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Terrain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Terrain.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Terrain::*)()>(&HoudiniEngineUnity::Test_Terrain::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x207692c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Terrain.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Terrain::*)(HoudiniEngineUnity::Test_Terrain)>(&HoudiniEngineUnity::Test_Terrain::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x207698c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Terrain>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Terrain>
constexpr  HoudiniEngineUnity::Test_Terrain::operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Terrain>() const noexcept {
return HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Terrain>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Terrain>
constexpr  HoudiniEngineUnity::Test_Terrain::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Terrain>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Terrain>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_Terrain::__set_self(UnityEngine::Terrain value)  {
::cordl_internals::setInstanceField<UnityEngine::Terrain, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Terrain>(value));
}
constexpr UnityEngine::Terrain HoudiniEngineUnity::Test_Terrain::__get_self() const {
return ::cordl_internals::getInstanceField<UnityEngine::Terrain, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::Terrain", modifiers: "", def_value: None }]
 HoudiniEngineUnity::Test_Terrain::Test_Terrain(UnityEngine::Terrain self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_Terrain>(self))) {}
 void HoudiniEngineUnity::Test_Terrain::_ctor(UnityEngine::Terrain self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Terrain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_Terrain::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::Test_Terrain::IsEquivalentTo(HoudiniEngineUnity::Test_Terrain other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Terrain>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Terrain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
