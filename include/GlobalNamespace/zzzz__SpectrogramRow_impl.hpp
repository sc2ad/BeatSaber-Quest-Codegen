#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpectrogramRow_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::SpectrogramRow.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpectrogramRow::*)()>(&GlobalNamespace::SpectrogramRow::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x226c088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpectrogramRow.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpectrogramRow::*)()>(&GlobalNamespace::SpectrogramRow::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x226c130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpectrogramRow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpectrogramRow::*)()>(&GlobalNamespace::SpectrogramRow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpectrogramRow::__set__meshRenderers(::ArrayW<UnityEngine::MeshRenderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::MeshRenderer>>(value));
}
constexpr ::ArrayW<UnityEngine::MeshRenderer> GlobalNamespace::SpectrogramRow::__get__meshRenderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpectrogramRow::__set__dataIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::SpectrogramRow::__get__dataIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpectrogramRow::__set__spectrogramData(GlobalNamespace::BasicSpectrogramData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicSpectrogramData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicSpectrogramData>(value));
}
constexpr GlobalNamespace::BasicSpectrogramData GlobalNamespace::SpectrogramRow::__get__spectrogramData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicSpectrogramData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SpectrogramRow::__set__spectrogramDataID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::SpectrogramRow::__get__spectrogramDataID()  {
return ::cordl_internals::getStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get>();
}
 void GlobalNamespace::SpectrogramRow::__set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get>(std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
 UnityEngine::MaterialPropertyBlock GlobalNamespace::SpectrogramRow::__get__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get>();
}
 void GlobalNamespace::SpectrogramRow::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpectrogramRow::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SpectrogramRow GlobalNamespace::SpectrogramRow::New_ctor()  {
GlobalNamespace::SpectrogramRow o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SpectrogramRow>())};
return o;
}
 void GlobalNamespace::SpectrogramRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpectrogramRow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
