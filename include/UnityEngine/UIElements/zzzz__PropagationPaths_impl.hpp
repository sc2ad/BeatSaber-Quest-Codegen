#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::UnityEngine__UIElements__PropagationPaths__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type  UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type  UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::TrickleDown{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type  UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type::BubbleUp{2};
//  Writing Method size for method: UnityEngine::UIElements::PropagationPaths._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PropagationPaths::*)()>(&UnityEngine::UIElements::PropagationPaths::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2cd5390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PropagationPaths.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::PropagationPaths (*)(UnityEngine::UIElements::PropagationPaths)>(&UnityEngine::UIElements::PropagationPaths::Copy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2cd545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PropagationPaths>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PropagationPaths.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::PropagationPaths (*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::EventBase, UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type)>(&UnityEngine::UIElements::PropagationPaths::Build)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2cd553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PropagationPaths.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PropagationPaths::*)()>(&UnityEngine::UIElements::PropagationPaths::Release)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2cd5834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::PropagationPaths::__set_s_Pool(UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths> value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths>, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get>(std::forward<UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths>>(value));
}
 UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths> UnityEngine::UIElements::PropagationPaths::__get_s_Pool()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths>, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get>();
}
constexpr void UnityEngine::UIElements::PropagationPaths::__set_trickleDownPath(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::PropagationPaths::__get_trickleDownPath() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PropagationPaths::__set_targetElements(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::PropagationPaths::__get_targetElements() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PropagationPaths::__set_bubbleUpPath(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::PropagationPaths::__get_bubbleUpPath() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::PropagationPaths UnityEngine::UIElements::PropagationPaths::New_ctor()  {
UnityEngine::UIElements::PropagationPaths o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::PropagationPaths>())};
return o;
}
 void UnityEngine::UIElements::PropagationPaths::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::PropagationPaths UnityEngine::UIElements::PropagationPaths::Copy(UnityEngine::UIElements::PropagationPaths paths)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PropagationPaths>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::PropagationPaths, false>(nullptr, ___internal_method, paths);
}
 UnityEngine::UIElements::PropagationPaths UnityEngine::UIElements::PropagationPaths::Build(UnityEngine::UIElements::VisualElement elem, UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type pathTypesRequested)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::PropagationPaths, false>(nullptr, ___internal_method, elem, evt, pathTypesRequested);
}
 void UnityEngine::UIElements::PropagationPaths::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PropagationPaths>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
