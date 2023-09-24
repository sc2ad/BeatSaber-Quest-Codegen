#pragma once
#include "HoudiniEngineUnity/zzzz__Test_MeshRenderer_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_MeshRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_MeshRenderer::*)(UnityEngine::MeshRenderer)>(&HoudiniEngineUnity::Test_MeshRenderer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2073690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshRenderer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_MeshRenderer.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshRenderer::*)()>(&HoudiniEngineUnity::Test_MeshRenderer::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20736b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_MeshRenderer.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshRenderer::*)(HoudiniEngineUnity::Test_MeshRenderer)>(&HoudiniEngineUnity::Test_MeshRenderer::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2073718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_MeshRenderer>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshRenderer>
constexpr  HoudiniEngineUnity::Test_MeshRenderer::operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshRenderer>() const noexcept {
return HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshRenderer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshRenderer>
constexpr  HoudiniEngineUnity::Test_MeshRenderer::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshRenderer>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshRenderer>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_MeshRenderer::__set_self(UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshRenderer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshRenderer>(value));
}
constexpr UnityEngine::MeshRenderer HoudiniEngineUnity::Test_MeshRenderer::__get_self() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshRenderer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::Test_MeshRenderer HoudiniEngineUnity::Test_MeshRenderer::New_ctor(UnityEngine::MeshRenderer self)  {
HoudiniEngineUnity::Test_MeshRenderer o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::Test_MeshRenderer>(self))};
return o;
}
 void HoudiniEngineUnity::Test_MeshRenderer::_ctor(UnityEngine::MeshRenderer self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshRenderer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_MeshRenderer::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::Test_MeshRenderer::IsEquivalentTo(HoudiniEngineUnity::Test_MeshRenderer other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_MeshRenderer>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_MeshRenderer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
