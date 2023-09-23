#pragma once
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__IncrementalReadDummyDecoder_def.hpp"
//  Writing Method size for method: System::Xml::IncrementalReadDummyDecoder.get_IsFull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IncrementalReadDummyDecoder::*)()>(&System::Xml::IncrementalReadDummyDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c1158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IncrementalReadDummyDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::IncrementalReadDummyDecoder.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::IncrementalReadDummyDecoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::IncrementalReadDummyDecoder::Decode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c1160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IncrementalReadDummyDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::IncrementalReadDummyDecoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::IncrementalReadDummyDecoder::*)()>(&System::Xml::IncrementalReadDummyDecoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c1168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool System::Xml::IncrementalReadDummyDecoder::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                            "get_IsFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::IncrementalReadDummyDecoder::Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, startPos, len);
}
// Ctor Parameters []
 System::Xml::IncrementalReadDummyDecoder::IncrementalReadDummyDecoder()  : System::Xml::IncrementalReadDecoder(THROW_UNLESS(::il2cpp_utils::New<IncrementalReadDummyDecoder>())) {}
 void System::Xml::IncrementalReadDummyDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IncrementalReadDummyDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
