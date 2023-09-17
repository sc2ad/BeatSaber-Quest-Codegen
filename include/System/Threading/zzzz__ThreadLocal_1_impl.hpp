#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile::____System__Threading__ThreadLocal_1__LinkedSlotVolatile(::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile::__set_Value(::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x0>(this->__instance, std::forward<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile::__get_Value() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x0>(this->__instance);
}
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::*)(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>)>(&::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__set_Next(::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__get_Next() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__set_Previous(::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__get_Previous() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__set_SlotArray(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
constexpr ::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__set_Value(T value)  {
::cordl_internals::setInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::__get_Value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "slotArray", ty: "::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>", modifiers: "", def_value: None }]
 ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::____System__Threading__ThreadLocal_1__LinkedSlot(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Threading__ThreadLocal_1__LinkedSlot>(slotArray))) {}
 void ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot::_ctor(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray);
}
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__IdManager.GetId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::____System__Threading__ThreadLocal_1__IdManager::*)()>(&::System::Threading::____System__Threading__ThreadLocal_1__IdManager::GetId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__IdManager.ReturnId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadLocal_1__IdManager::*)(int32_t)>(&::System::Threading::____System__Threading__ThreadLocal_1__IdManager::ReturnId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            "ReturnId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__IdManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadLocal_1__IdManager::*)()>(&::System::Threading::____System__Threading__ThreadLocal_1__IdManager::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::__set_m_nextIdToTry(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::__get_m_nextIdToTry() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::__set_m_freeIds(::System::Collections::Generic::List_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<bool>>(value));
}
constexpr ::System::Collections::Generic::List_1<bool> ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::__get_m_freeIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::GetId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::ReturnId(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            "ReturnId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
// Ctor Parameters []
 ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::____System__Threading__ThreadLocal_1__IdManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Threading__ThreadLocal_1__IdManager>())) {}
 void ::System::Threading::____System__Threading__ThreadLocal_1__IdManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__IdManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::*)(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, bool)>(&::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::*)()>(&::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::Finalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::__set_SlotArray(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
constexpr ::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::__set_m_trackAllValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "slotArray", ty: "::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>", modifiers: "", def_value: None }, CppParam { name: "trackAllValues", ty: "bool", modifiers: "", def_value: None }]
 ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::____System__Threading__ThreadLocal_1__FinalizationHelper(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Threading__ThreadLocal_1__FinalizationHelper>(slotArray, trackAllValues))) {}
 void ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::_ctor(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray, trackAllValues);
}
 void ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Threading::ThreadLocal_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(::System::Func_1<T>, bool)>(&::System::Threading::ThreadLocal_1::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::Finalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::ThreadLocal_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(bool)>(&::System::Threading::ThreadLocal_1::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::ThreadLocal_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::ThreadLocal_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(T)>(&::System::Threading::ThreadLocal_1::set_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.GetValueSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::GetValueSlow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.SetValueSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(T, ::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>)>(&::System::Threading::ThreadLocal_1::SetValueSlow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "SetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.CreateLinkedSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, int32_t, T)>(&::System::Threading::ThreadLocal_1::CreateLinkedSlot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "CreateLinkedSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.get_IsValueCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadLocal_1::*)()>(&::System::Threading::ThreadLocal_1::get_IsValueCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "get_IsValueCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.GrowTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadLocal_1::*)(ByRef<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>, int32_t)>(&::System::Threading::ThreadLocal_1::GrowTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadLocal_1.GetNewTableSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Threading::ThreadLocal_1::GetNewTableSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GetNewTableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Threading::ThreadLocal_1::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ThreadLocal_1::__set_m_valueFactory(::System::Func_1<T> value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<T>>(value));
}
constexpr ::System::Func_1<T> ::System::Threading::ThreadLocal_1::__get_m_valueFactory() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::ThreadLocal_1::__set_ts_slotArray(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>(std::forward<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>(value));
}
 ::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> ::System::Threading::ThreadLocal_1::__get_ts_slotArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>();
}
 void ::System::Threading::ThreadLocal_1::__set_ts_finalizationHelper(::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper<T> value)  {
::cordl_internals::setStaticField<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper<T>, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>(std::forward<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper<T>>(value));
}
 ::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper<T> ::System::Threading::ThreadLocal_1::__get_ts_finalizationHelper()  {
return ::cordl_internals::getStaticField<::System::Threading::____System__Threading__ThreadLocal_1__FinalizationHelper<T>, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>();
}
constexpr void ::System::Threading::ThreadLocal_1::__set_m_idComplement(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::ThreadLocal_1::__get_m_idComplement() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ThreadLocal_1::__set_m_initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Threading::ThreadLocal_1::__get_m_initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::ThreadLocal_1::__set_s_idManager(::System::Threading::____System__Threading__ThreadLocal_1__IdManager<T> value)  {
::cordl_internals::setStaticField<::System::Threading::____System__Threading__ThreadLocal_1__IdManager<T>, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>(std::forward<::System::Threading::____System__Threading__ThreadLocal_1__IdManager<T>>(value));
}
 ::System::Threading::____System__Threading__ThreadLocal_1__IdManager<T> ::System::Threading::ThreadLocal_1::__get_s_idManager()  {
return ::cordl_internals::getStaticField<::System::Threading::____System__Threading__ThreadLocal_1__IdManager<T>, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get>();
}
constexpr void ::System::Threading::ThreadLocal_1::__set_m_linkedSlot(::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>>(value));
}
constexpr ::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T> ::System::Threading::ThreadLocal_1::__get_m_linkedSlot() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlot<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ThreadLocal_1::__set_m_trackAllValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Threading::ThreadLocal_1::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Threading::ThreadLocal_1::ThreadLocal_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadLocal_1>())) {}
 void ::System::Threading::ThreadLocal_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::Initialize(::System::Func_1<T> valueFactory, bool trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueFactory, trackAllValues);
}
 void ::System::Threading::ThreadLocal_1::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::StringW ::System::Threading::ThreadLocal_1::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::System::Threading::ThreadLocal_1::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::set_Value(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 T ::System::Threading::ThreadLocal_1::GetValueSlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::SetValueSlow(T value, ::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "SetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, slotArray);
}
 void ::System::Threading::ThreadLocal_1::CreateLinkedSlot(::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, int32_t id, T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "CreateLinkedSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slotArray, id, value);
}
 bool ::System::Threading::ThreadLocal_1::get_IsValueCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "get_IsValueCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::ThreadLocal_1::GrowTable(ByRef<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>> table, int32_t minLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Threading::____System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, table, minLength);
}
 int32_t ::System::Threading::ThreadLocal_1::GetNewTableSize(int32_t minSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1>::get(),
                            "GetNewTableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, minSize);
}
} // end anonymous namespace
