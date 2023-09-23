#pragma once
#include "System/Runtime/Serialization/zzzz__SerializationEventsCache_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEvents_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::*)()>(&System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23496ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c._GetSerializationEventsForType_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::SerializationEvents (System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::*)(System::Type)>(&System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::_GetSerializationEventsForType_b__1_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23496b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get(),
                            "<GetSerializationEventsForType>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::__set___9(System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c value)  {
::cordl_internals::setStaticField<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get>(std::forward<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>(value));
}
 System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get>();
}
 void System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::__set___9__1_0(System::Func_2<System::Type,System::Runtime::Serialization::SerializationEvents> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Type,System::Runtime::Serialization::SerializationEvents>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get>(std::forward<System::Func_2<System::Type,System::Runtime::Serialization::SerializationEvents>>(value));
}
 System::Func_2<System::Type,System::Runtime::Serialization::SerializationEvents> System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Type,System::Runtime::Serialization::SerializationEvents>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get>();
}
// Ctor Parameters []
 System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::System__Runtime__Serialization__SerializationEventsCache____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Runtime__Serialization__SerializationEventsCache____c>())) {}
 void System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::SerializationEvents System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c::_GetSerializationEventsForType_b__1_0(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__SerializationEventsCache____c>::get(),
                            "<GetSerializationEventsForType>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::SerializationEvents, false>(const_cast<void*>(instance), ___internal_method, type);
}
//  Writing Method size for method: System::Runtime::Serialization::SerializationEventsCache.GetSerializationEventsForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::SerializationEvents (*)(System::Type)>(&System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2349488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationEventsCache>::get(),
                            "GetSerializationEventsForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::SerializationEventsCache::__set_s_cache(System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Runtime::Serialization::SerializationEvents> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Runtime::Serialization::SerializationEvents>, "s_cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationEventsCache>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Runtime::Serialization::SerializationEvents>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Runtime::Serialization::SerializationEvents> System::Runtime::Serialization::SerializationEventsCache::__get_s_cache()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Runtime::Serialization::SerializationEvents>, "s_cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationEventsCache>::get>();
}
 System::Runtime::Serialization::SerializationEvents System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationEventsCache>::get(),
                            "GetSerializationEventsForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::SerializationEvents, false>(nullptr, ___internal_method, t);
}
