#pragma once
#include "System/zzzz__Empty_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::Empty._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Empty::*)()>(&System::Empty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247384c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Empty.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Empty::*)()>(&System::Empty::ToString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2473854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Empty),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Empty.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Empty::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Empty::GetObjectData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x247389c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Empty::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Empty::__set_Value(System::Empty value)  {
::cordl_internals::setStaticField<System::Empty, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get>(std::forward<System::Empty>(value));
}
 System::Empty System::Empty::__get_Value()  {
return ::cordl_internals::getStaticField<System::Empty, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get>();
}
// Ctor Parameters []
 System::Empty::Empty()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Empty>())) {}
 void System::Empty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Empty::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Empty::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Empty>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
