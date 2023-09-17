#pragma once
namespace {
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetLogger.WriteNet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::INetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::LiteNetLib::INetLogger::WriteNet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::INetLogger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetLogger>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::LiteNetLib::INetLogger::WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetLogger>::get(),
                            "WriteNet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetLogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, str, args);
}
} // end anonymous namespace
