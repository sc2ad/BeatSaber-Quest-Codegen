#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SafeSerializationEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SafeSerializationEventArgs::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SafeSerializationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2350b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SafeSerializationEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SafeSerializationEventArgs.get_SerializedStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> (System::Runtime::Serialization::SafeSerializationEventArgs::*)()>(&System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2350c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SafeSerializationEventArgs>::get(),
                            "get_SerializedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__set_m_streamingContext(System::Runtime::Serialization::StreamingContext value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::StreamingContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::StreamingContext>(value));
}
constexpr System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_streamingContext() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::StreamingContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__set_m_serializedStates(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_serializedStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SafeSerializationEventArgs::SafeSerializationEventArgs(System::Runtime::Serialization::StreamingContext streamingContext)  : System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<SafeSerializationEventArgs>(streamingContext))) {}
 void System::Runtime::Serialization::SafeSerializationEventArgs::_ctor(System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SafeSerializationEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, streamingContext);
}
 System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SafeSerializationEventArgs>::get(),
                            "get_SerializedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
