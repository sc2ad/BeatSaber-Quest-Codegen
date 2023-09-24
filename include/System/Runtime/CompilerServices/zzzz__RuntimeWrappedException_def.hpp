#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeWrappedException;
}
// Type: System.Runtime.CompilerServices::RuntimeWrappedException
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3375))
// CS Name: System.Runtime.CompilerServices.RuntimeWrappedException
class CORDL_TYPE RuntimeWrappedException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~RuntimeWrappedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: " const&", def_value: None }]
constexpr RuntimeWrappedException(RuntimeWrappedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeWrappedException", modifiers: "&&", def_value: None }]
constexpr RuntimeWrappedException(RuntimeWrappedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeWrappedException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr RuntimeWrappedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeWrappedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeWrappedException& operator=(RuntimeWrappedException&& o) noexcept = default;
  constexpr RuntimeWrappedException& operator=(RuntimeWrappedException const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__wrappedException, put=__set__wrappedException))  _wrappedException;

constexpr void __set__wrappedException(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__wrappedException() const;


// Methods

static System::Runtime::CompilerServices::RuntimeWrappedException New_ctor(::bs_hook::Il2CppWrapperType thrownObject) ;

/// @brief Method .ctor addr 0x236e124 size 0x90 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType thrownObject) ;

static System::Runtime::CompilerServices::RuntimeWrappedException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x236e1b4 size 0x100 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x236e2b4 size 0xdc virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static System::Runtime::CompilerServices::RuntimeWrappedException New_ctor() ;

/// @brief Method .ctor addr 0x236e390 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::RuntimeWrappedException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeWrappedException, "System.Runtime.CompilerServices", "RuntimeWrappedException");
