#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr  UnityEngine::Playables::ScriptPlayable_1<T>::operator UnityEngine::Playables::IPlayable() const {
return UnityEngine::Playables::IPlayable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>
constexpr  UnityEngine::Playables::ScriptPlayable_1<T>::operator System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>() const {
return System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Playables::ScriptPlayable_1<T>::ScriptPlayable_1(UnityEngine::Playables::PlayableHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void UnityEngine::Playables::ScriptPlayable_1<T>::__set_m_Handle(UnityEngine::Playables::PlayableHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance, std::forward<UnityEngine::Playables::PlayableHandle>(value));
}
constexpr UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance);
}
 void UnityEngine::Playables::ScriptPlayable_1<T>::__set_m_NullPlayable(UnityEngine::Playables::ScriptPlayable_1<T> value)  {
::cordl_internals::setStaticField<UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get>(std::forward<UnityEngine::Playables::ScriptPlayable_1<T>>(value));
}
 UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::__get_m_NullPlayable()  {
return ::cordl_internals::getStaticField<UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get>();
}
 UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::get_Null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "get_Null",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method);
}
/// @param inputCount: int32_t (default: 0)
 UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, graph, inputCount);
}
/// @param inputCount: int32_t (default: 0)
 UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(UnityEngine::Playables::PlayableGraph graph, T template, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, graph, template, inputCount);
}
 UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::CreateHandle(UnityEngine::Playables::PlayableGraph graph, T template, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "CreateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableHandle, false>(nullptr, ___internal_method, graph, template, inputCount);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::Playables::ScriptPlayable_1<T>::CreateScriptInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "CreateScriptInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstance(UnityEngine::Playables::IPlayableBehaviour source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "CloneScriptInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::IPlayableBehaviour>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, source);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromEngineObject(UnityEngine::Object source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "CloneScriptInstanceFromEngineObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, source);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromIClonable(System::ICloneable source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "CloneScriptInstanceFromIClonable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ICloneable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, source);
}
 void UnityEngine::Playables::ScriptPlayable_1<T>::_ctor(UnityEngine::Playables::PlayableHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T UnityEngine::Playables::ScriptPlayable_1<T>::GetBehaviour()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "GetBehaviour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Playables::Playable UnityEngine::Playables::ScriptPlayable_1<T>::op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Playables::ScriptPlayable_1<T> playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::ScriptPlayable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(nullptr, ___internal_method, playable);
}
 UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::op_Explicit_UnityEngine__Playables__ScriptPlayable_1_T_(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, playable);
}
 bool UnityEngine::Playables::ScriptPlayable_1<T>::Equals(UnityEngine::Playables::ScriptPlayable_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::ScriptPlayable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
