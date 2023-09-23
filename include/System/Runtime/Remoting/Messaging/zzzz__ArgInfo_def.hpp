#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
// Type: System.Runtime.Remoting.Messaging::ArgInfo
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3146))
// CS Name: System.Runtime.Remoting.Messaging.ArgInfo
class CORDL_TYPE ArgInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ArgInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: " const&", def_value: None }]
constexpr ArgInfo(ArgInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "&&", def_value: None }]
constexpr ArgInfo(ArgInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArgInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgInfo& operator=(ArgInfo&& o) noexcept = default;
  constexpr ArgInfo& operator=(ArgInfo const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__paramMap, put=__set__paramMap))  _paramMap;

constexpr void __set__paramMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__paramMap() const;

 int32_t __declspec(property(get=__get__inoutArgCount, put=__set__inoutArgCount))  _inoutArgCount;

constexpr void __set__inoutArgCount(int32_t value) ;

constexpr int32_t __get__inoutArgCount() const;

 System::Reflection::MethodBase __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Reflection::MethodBase value) ;

constexpr System::Reflection::MethodBase __get__method() const;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Reflection::MethodBase", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Runtime::Remoting::Messaging::ArgInfoType", modifiers: "", def_value: None }]
explicit ArgInfo(System::Reflection::MethodBase method, System::Runtime::Remoting::Messaging::ArgInfoType type) ;

/// @brief Method .ctor addr 0x233b358 size 0x1b4 virtual false final false
 void _ctor(System::Reflection::MethodBase method, System::Runtime::Remoting::Messaging::ArgInfoType type) ;

/// @brief Method GetInOutArgs addr 0x233b50c size 0x100 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetInOutArgs(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ArgInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ArgInfo, "System.Runtime.Remoting.Messaging", "ArgInfo");
