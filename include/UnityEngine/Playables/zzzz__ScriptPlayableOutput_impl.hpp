#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Playables/zzzz__ScriptPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(&::UnityEngine::Playables::ScriptPlayableOutput::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b7c8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::ScriptPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(&::UnityEngine::Playables::ScriptPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b7c9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.get_Null
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayableOutput (*)()>(&::UnityEngine::Playables::ScriptPlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b7c974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "get_Null",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::ScriptPlayableOutput::*)()>(&::UnityEngine::Playables::ScriptPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7caa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::ScriptPlayableOutput.op_Implicit___UnityEngine__Playables__PlayableOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Playables::ScriptPlayableOutput)>(&::UnityEngine::Playables::ScriptPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b7cab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::ScriptPlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::IPlayableOutput
constexpr  ::UnityEngine::Playables::ScriptPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput() const {
return ::UnityEngine::Playables::IPlayableOutput(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::ScriptPlayableOutput::ScriptPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void ::UnityEngine::Playables::ScriptPlayableOutput::__set_m_Handle(::UnityEngine::Playables::PlayableOutputHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance, std::forward<::UnityEngine::Playables::PlayableOutputHandle>(value));
}
constexpr ::UnityEngine::Playables::PlayableOutputHandle ::UnityEngine::Playables::ScriptPlayableOutput::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance);
}
 ::UnityEngine::Playables::ScriptPlayableOutput ::UnityEngine::Playables::ScriptPlayableOutput::Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayableOutput, false>(nullptr, ___internal_method, graph, name);
}
 void ::UnityEngine::Playables::ScriptPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutputHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 ::UnityEngine::Playables::ScriptPlayableOutput ::UnityEngine::Playables::ScriptPlayableOutput::get_Null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "get_Null",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayableOutput, false>(nullptr, ___internal_method);
}
 ::UnityEngine::Playables::PlayableOutputHandle ::UnityEngine::Playables::ScriptPlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::Playables::PlayableOutput ::UnityEngine::Playables::ScriptPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Playables::ScriptPlayableOutput output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayableOutput>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::ScriptPlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(nullptr, ___internal_method, output);
}
} // end anonymous namespace
