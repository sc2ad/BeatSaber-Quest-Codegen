#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockController.get_renderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Renderer> (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa25f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "get_renderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockController.get_materialPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MaterialPropertyBlock (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fa23d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockController.ApplyChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1fa2174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "ApplyChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa25f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__renderers(::ArrayW<UnityEngine::Renderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Renderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Renderer>>(value));
}
constexpr ::ArrayW<UnityEngine::Renderer> GlobalNamespace::MaterialPropertyBlockController::__get__renderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Renderer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setInstanceField<UnityEngine::MaterialPropertyBlock, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
constexpr UnityEngine::MaterialPropertyBlock GlobalNamespace::MaterialPropertyBlockController::__get__materialPropertyBlock() const {
return ::cordl_internals::getInstanceField<UnityEngine::MaterialPropertyBlock, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__numberOfMaterialsInRenderers(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> GlobalNamespace::MaterialPropertyBlockController::__get__numberOfMaterialsInRenderers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__isInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MaterialPropertyBlockController::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<UnityEngine::Renderer> GlobalNamespace::MaterialPropertyBlockController::get_renderers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "get_renderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Renderer>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::MaterialPropertyBlock GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MaterialPropertyBlock, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MaterialPropertyBlockController::ApplyChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            "ApplyChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MaterialPropertyBlockController GlobalNamespace::MaterialPropertyBlockController::New_ctor()  {
GlobalNamespace::MaterialPropertyBlockController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MaterialPropertyBlockController>())};
return o;
}
 void GlobalNamespace::MaterialPropertyBlockController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
