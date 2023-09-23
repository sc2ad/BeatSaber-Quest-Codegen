#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectNull_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23571c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull.SetNullCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(int32_t)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::SetNullCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23571c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "SetNullCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Write)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23571d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryParser, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x235727c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectNull.Dump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectNull::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectNull::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23572dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectNull::__set_nullCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::ObjectNull::__get_nullCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Runtime::Serialization::Formatters::Binary::ObjectNull::ObjectNull()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectNull>())) {}
 void System::Runtime::Serialization::Formatters::Binary::ObjectNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectNull::SetNullCount(int32_t nullCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "SetNullCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nullCount);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectNull::Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sout);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectNull::Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectNull::Dump()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectNull>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
