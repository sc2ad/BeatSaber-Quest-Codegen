#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBoundingBox_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomBoundingBox.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBoundingBox::*)()>(&GlobalNamespace::CustomBoundingBox::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1f76758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBoundingBox>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomBoundingBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBoundingBox::*)()>(&GlobalNamespace::CustomBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1f767e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBoundingBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CustomBoundingBox::__set__meshFilter(UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshFilter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshFilter>(value));
}
constexpr UnityEngine::MeshFilter GlobalNamespace::CustomBoundingBox::__get__meshFilter() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshFilter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxCenter(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::CustomBoundingBox::__get__boundingBoxCenter() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxSize(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::CustomBoundingBox::__get__boundingBoxSize() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__meshRenderer(UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshRenderer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshRenderer>(value));
}
constexpr UnityEngine::MeshRenderer GlobalNamespace::CustomBoundingBox::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshRenderer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CustomBoundingBox::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBoundingBox>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::CustomBoundingBox GlobalNamespace::CustomBoundingBox::New_ctor()  {
GlobalNamespace::CustomBoundingBox o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CustomBoundingBox>())};
return o;
}
 void GlobalNamespace::CustomBoundingBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBoundingBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
