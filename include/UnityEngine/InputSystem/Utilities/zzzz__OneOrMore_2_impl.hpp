#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::Generic::IEnumerator_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__set_m_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__get_m_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__set_m_List(UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__get_m_List() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::New_ctor()  {
UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>())};
return o;
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::operator System::Collections::Generic::IEnumerator_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::__set_m_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::__get_m_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::__set_m_List(UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::__get_m_List() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::New_ctor()  {
UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>())};
return o;
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::Generic::IReadOnlyList_1<TValue>() const {
return System::Collections::Generic::IReadOnlyList_1<TValue>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::Generic::IEnumerable_1<TValue>() const {
return System::Collections::Generic::IEnumerable_1<TValue>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::operator System::Collections::Generic::IReadOnlyCollection_1<TValue>() const {
return System::Collections::Generic::IReadOnlyCollection_1<TValue>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Multiple", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::OneOrMore_2(bool m_IsSingle, TValue m_Single, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> m_Multiple) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_IsSingle = m_IsSingle;
this->m_Single = m_Single;
this->m_Multiple = m_Multiple;
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__set_m_IsSingle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__get_m_IsSingle() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__set_m_Single(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__get_m_Single() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__set_m_Multiple(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::__get_m_Multiple() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->__instance);
}
 int32_t UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::_ctor(TValue single)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, single);
}
 void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::_ctor(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> multiple)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, multiple);
}
 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___bs_hook__Il2CppWrapperType__(TValue single)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, single);
}
 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___bs_hook__Il2CppWrapperType__(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> multiple)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, multiple);
}
 System::Collections::Generic::IEnumerator_1<TValue> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TValue>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::operator System::Collections::Generic::IReadOnlyList_1<TValue>() const {
return System::Collections::Generic::IReadOnlyList_1<TValue>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::operator System::Collections::Generic::IEnumerable_1<TValue>() const {
return System::Collections::Generic::IEnumerable_1<TValue>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::operator System::Collections::Generic::IReadOnlyCollection_1<TValue>() const {
return System::Collections::Generic::IReadOnlyCollection_1<TValue>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Multiple", ty: "TList", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::OneOrMore_2(bool m_IsSingle, TValue m_Single, TList m_Multiple) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_IsSingle = m_IsSingle;
this->m_Single = m_Single;
this->m_Multiple = m_Multiple;
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__set_m_IsSingle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__get_m_IsSingle() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__set_m_Single(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__get_m_Single() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__set_m_Multiple(TList value)  {
::cordl_internals::setInstanceField<TList, 0x10>(this->__instance, std::forward<TList>(value));
}
constexpr TList UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::__get_m_Multiple() const {
return ::cordl_internals::getInstanceField<TList, 0x10>(this->__instance);
}
 int32_t UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::_ctor(TValue single)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, single);
}
 void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::_ctor(TList multiple)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, multiple);
}
 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,TList_(TValue single)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>, false>(nullptr, ___internal_method, single);
}
 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,TList_(TList multiple)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>, false>(nullptr, ___internal_method, multiple);
}
 System::Collections::Generic::IEnumerator_1<TValue> UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TValue>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
