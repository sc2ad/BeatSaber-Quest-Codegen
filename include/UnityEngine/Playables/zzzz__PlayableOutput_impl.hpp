#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
//  Writing Method size for method: UnityEngine::Playables::PlayableOutput.get_Null
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (*)()>(&UnityEngine::Playables::PlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b7ce3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "get_Null",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Playables::PlayableOutput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutput::*)(UnityEngine::Playables::PlayableOutputHandle)>(&UnityEngine::Playables::PlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutputHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Playables::PlayableOutput.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Playables::PlayableOutput::*)()>(&UnityEngine::Playables::PlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7d7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Playables::PlayableOutput.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableOutput::*)(UnityEngine::Playables::PlayableOutput)>(&UnityEngine::Playables::PlayableOutput::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b7d7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr  UnityEngine::Playables::PlayableOutput::operator UnityEngine::Playables::IPlayableOutput() const {
return UnityEngine::Playables::IPlayableOutput(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::PlayableOutput>
constexpr  UnityEngine::Playables::PlayableOutput::operator System::IEquatable_1<UnityEngine::Playables::PlayableOutput>() const {
return System::IEquatable_1<UnityEngine::Playables::PlayableOutput>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Playables::PlayableOutput::PlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void UnityEngine::Playables::PlayableOutput::__set_m_Handle(UnityEngine::Playables::PlayableOutputHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance, std::forward<UnityEngine::Playables::PlayableOutputHandle>(value));
}
constexpr UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::PlayableOutput::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance);
}
 void UnityEngine::Playables::PlayableOutput::__set_m_NullPlayableOutput(UnityEngine::Playables::PlayableOutput value)  {
::cordl_internals::setStaticField<UnityEngine::Playables::PlayableOutput, "m_NullPlayableOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get>(std::forward<UnityEngine::Playables::PlayableOutput>(value));
}
 UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableOutput::__get_m_NullPlayableOutput()  {
return ::cordl_internals::getStaticField<UnityEngine::Playables::PlayableOutput, "m_NullPlayableOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get>();
}
 UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableOutput::get_Null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "get_Null",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableOutput, false>(nullptr, ___internal_method);
}
 void UnityEngine::Playables::PlayableOutput::_ctor(UnityEngine::Playables::PlayableOutputHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutputHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::PlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableOutputHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
template<typename T>
 bool UnityEngine::Playables::PlayableOutput::IsPlayableOutputOfType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                        "IsPlayableOutputOfType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Playables::PlayableOutput::Equals(UnityEngine::Playables::PlayableOutput other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::PlayableOutput>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
