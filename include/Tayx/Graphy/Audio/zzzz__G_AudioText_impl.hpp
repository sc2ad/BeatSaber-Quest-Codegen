#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioText_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: Tayx::Graphy::Audio::G_AudioText.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Audio::G_AudioText::*)()>(&Tayx::Graphy::Audio::G_AudioText::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2877d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Audio::G_AudioText.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Audio::G_AudioText::*)()>(&Tayx::Graphy::Audio::G_AudioText::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2877e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Audio::G_AudioText.UpdateParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Audio::G_AudioText::*)()>(&Tayx::Graphy::Audio::G_AudioText::UpdateParameters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28777f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "UpdateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Audio::G_AudioText.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Audio::G_AudioText::*)()>(&Tayx::Graphy::Audio::G_AudioText::Init)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2877d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Audio::G_AudioText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Audio::G_AudioText::*)()>(&Tayx::Graphy::Audio::G_AudioText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2877f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_DBText(UnityEngine::UI::Text value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Text>(value));
}
constexpr UnityEngine::UI::Text Tayx::Graphy::Audio::G_AudioText::__get_m_DBText() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_graphyManager(Tayx::Graphy::GraphyManager value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::GraphyManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::GraphyManager>(value));
}
constexpr Tayx::Graphy::GraphyManager Tayx::Graphy::Audio::G_AudioText::__get_m_graphyManager() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::GraphyManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Audio::G_AudioMonitor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Audio::G_AudioMonitor>(value));
}
constexpr Tayx::Graphy::Audio::G_AudioMonitor Tayx::Graphy::Audio::G_AudioText::__get_m_audioMonitor() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Audio::G_AudioMonitor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_updateRate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Audio::G_AudioText::__get_m_updateRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_deltaTimeOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Tayx::Graphy::Audio::G_AudioText::__get_m_deltaTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Tayx::Graphy::Audio::G_AudioText::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Audio::G_AudioText::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Audio::G_AudioText::UpdateParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "UpdateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Audio::G_AudioText::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Tayx::Graphy::Audio::G_AudioText::G_AudioText()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<G_AudioText>())) {}
 void Tayx::Graphy::Audio::G_AudioText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Audio::G_AudioText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
