#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile::System__Threading__ThreadLocal_1__LinkedSlotVolatile(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile::__set_Value(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x0>(this->__instance, std::forward<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile::__get_Value() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x0>(this->__instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__set_Next(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__get_Next() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__set_Previous(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__get_Previous() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__set_SlotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
constexpr ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__set_Value(T value)  {
::cordl_internals::setInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::__get_Value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::New_ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  {
System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>(slotArray))};
return o;
}
 void System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>::_ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::__set_m_nextIdToTry(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::__get_m_nextIdToTry() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::__set_m_freeIds(System::Collections::Generic::List_1<bool> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<bool>>(value));
}
constexpr System::Collections::Generic::List_1<bool> System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::__get_m_freeIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::GetId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::ReturnId(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>>::get(),
                            "ReturnId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
 System::Threading::System__Threading__ThreadLocal_1__IdManager<T> System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::New_ctor()  {
System::Threading::System__Threading__ThreadLocal_1__IdManager<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>>())};
return o;
}
 void System::Threading::System__Threading__ThreadLocal_1__IdManager<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::__set_SlotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
constexpr ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::__set_m_trackAllValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::New_ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues)  {
System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>>(slotArray, trackAllValues))};
return o;
}
 void System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::_ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray, trackAllValues);
}
 void System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Threading::ThreadLocal_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_valueFactory(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> System::Threading::ThreadLocal_1<T>::__get_m_valueFactory() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::ThreadLocal_1<T>::__set_ts_slotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>(std::forward<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
 ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> System::Threading::ThreadLocal_1<T>::__get_ts_slotArray()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>();
}
 void System::Threading::ThreadLocal_1<T>::__set_ts_finalizationHelper(System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> value)  {
::cordl_internals::setStaticField<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>(std::forward<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>>(value));
}
 System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> System::Threading::ThreadLocal_1<T>::__get_ts_finalizationHelper()  {
return ::cordl_internals::getStaticField<System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>();
}
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_idComplement(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::ThreadLocal_1<T>::__get_m_idComplement() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::ThreadLocal_1<T>::__get_m_initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::ThreadLocal_1<T>::__set_s_idManager(System::Threading::System__Threading__ThreadLocal_1__IdManager<T> value)  {
::cordl_internals::setStaticField<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>(std::forward<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>>(value));
}
 System::Threading::System__Threading__ThreadLocal_1__IdManager<T> System::Threading::ThreadLocal_1<T>::__get_s_idManager()  {
return ::cordl_internals::getStaticField<System::Threading::System__Threading__ThreadLocal_1__IdManager<T>, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get>();
}
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_linkedSlot(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> System::Threading::ThreadLocal_1<T>::__get_m_linkedSlot() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_trackAllValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::ThreadLocal_1<T>::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::ThreadLocal_1<T> System::Threading::ThreadLocal_1<T>::New_ctor()  {
System::Threading::ThreadLocal_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::ThreadLocal_1<T>>())};
return o;
}
 void System::Threading::ThreadLocal_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::Initialize(System::Func_1<T> valueFactory, bool trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueFactory, trackAllValues);
}
 void System::Threading::ThreadLocal_1<T>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::StringW System::Threading::ThreadLocal_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Threading::ThreadLocal_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::set_Value(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 T System::Threading::ThreadLocal_1<T>::GetValueSlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "GetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::SetValueSlow(T value, ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "SetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, slotArray);
}
 void System::Threading::ThreadLocal_1<T>::CreateLinkedSlot(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, int32_t id, T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "CreateLinkedSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray, id, value);
}
 bool System::Threading::ThreadLocal_1<T>::get_IsValueCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "get_IsValueCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadLocal_1<T>::GrowTable(ByRef<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>> table, int32_t minLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, table, minLength);
}
 int32_t System::Threading::ThreadLocal_1<T>::GetNewTableSize(int32_t minSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadLocal_1<T>>::get(),
                            "GetNewTableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, minSize);
}
