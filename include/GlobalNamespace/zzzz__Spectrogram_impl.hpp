#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Spectrogram_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::Spectrogram.get_materialPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MaterialPropertyBlock (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x226bd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Spectrogram.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x226bdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Spectrogram.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::Update)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x226bebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Spectrogram._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Spectrogram::__set__meshRenderers(::ArrayW<UnityEngine::MeshRenderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::MeshRenderer>>(value));
}
constexpr ::ArrayW<UnityEngine::MeshRenderer> GlobalNamespace::Spectrogram::__get__meshRenderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::Spectrogram::__set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockController GlobalNamespace::Spectrogram::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::Spectrogram::__set__spectrogramData(GlobalNamespace::BasicSpectrogramData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicSpectrogramData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicSpectrogramData>(value));
}
constexpr GlobalNamespace::BasicSpectrogramData GlobalNamespace::Spectrogram::__get__spectrogramData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicSpectrogramData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::Spectrogram::__set__spectrogramDataID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::Spectrogram::__get__spectrogramDataID()  {
return ::cordl_internals::getStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get>();
}
 void GlobalNamespace::Spectrogram::__set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get>(std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
 UnityEngine::MaterialPropertyBlock GlobalNamespace::Spectrogram::__get__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get>();
}
 UnityEngine::MaterialPropertyBlock GlobalNamespace::Spectrogram::get_materialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MaterialPropertyBlock, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::Spectrogram::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::Spectrogram::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::Spectrogram GlobalNamespace::Spectrogram::New_ctor()  {
GlobalNamespace::Spectrogram o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Spectrogram>())};
return o;
}
 void GlobalNamespace::Spectrogram::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Spectrogram>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
