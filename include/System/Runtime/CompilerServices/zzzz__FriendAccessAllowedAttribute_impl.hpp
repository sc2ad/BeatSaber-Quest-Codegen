#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__FriendAccessAllowedAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::FriendAccessAllowedAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::FriendAccessAllowedAttribute::*)()>(&System::Runtime::CompilerServices::FriendAccessAllowedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2370a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FriendAccessAllowedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Runtime::CompilerServices::FriendAccessAllowedAttribute System::Runtime::CompilerServices::FriendAccessAllowedAttribute::New_ctor()  {
System::Runtime::CompilerServices::FriendAccessAllowedAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::CompilerServices::FriendAccessAllowedAttribute>())};
return o;
}
 void System::Runtime::CompilerServices::FriendAccessAllowedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FriendAccessAllowedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
