#pragma once
#include "System/Runtime/Serialization/zzzz__SurrogateSelector_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateHashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SurrogateSelector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SurrogateSelector::*)()>(&System::Runtime::Serialization::SurrogateSelector::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2353794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SurrogateSelector.AddSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SurrogateSelector::*)(System::Type, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ISerializationSurrogate)>(&System::Runtime::Serialization::SurrogateSelector::AddSurrogate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x235380c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::SurrogateSelector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SurrogateSelector.GetSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ISerializationSurrogate (System::Runtime::Serialization::SurrogateSelector::*)(System::Type, System::Runtime::Serialization::StreamingContext, ByRef<System::Runtime::Serialization::ISurrogateSelector>)>(&System::Runtime::Serialization::SurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2353994;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::SurrogateSelector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISurrogateSelector
constexpr  System::Runtime::Serialization::SurrogateSelector::operator System::Runtime::Serialization::ISurrogateSelector() const noexcept {
return System::Runtime::Serialization::ISurrogateSelector(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SurrogateSelector::__set_m_surrogates(System::Runtime::Serialization::SurrogateHashtable value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SurrogateHashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SurrogateHashtable>(value));
}
constexpr System::Runtime::Serialization::SurrogateHashtable System::Runtime::Serialization::SurrogateSelector::__get_m_surrogates() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SurrogateHashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SurrogateSelector::__set_m_nextSelector(System::Runtime::Serialization::ISurrogateSelector value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ISurrogateSelector>(value));
}
constexpr System::Runtime::Serialization::ISurrogateSelector System::Runtime::Serialization::SurrogateSelector::__get_m_nextSelector() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::SurrogateSelector System::Runtime::Serialization::SurrogateSelector::New_ctor()  {
System::Runtime::Serialization::SurrogateSelector o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::SurrogateSelector>())};
return o;
}
 void System::Runtime::Serialization::SurrogateSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::SurrogateSelector::AddSurrogate(System::Type type, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISerializationSurrogate surrogate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                            "AddSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISerializationSurrogate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, context, surrogate);
}
 System::Runtime::Serialization::ISerializationSurrogate System::Runtime::Serialization::SurrogateSelector::GetSurrogate(System::Type type, System::Runtime::Serialization::StreamingContext context, ByRef<System::Runtime::Serialization::ISurrogateSelector> selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateSelector>::get(),
                            "GetSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::ISurrogateSelector>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ISerializationSurrogate, false>(const_cast<void*>(instance), ___internal_method, type, context, selector);
}
