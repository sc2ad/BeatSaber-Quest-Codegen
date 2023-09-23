#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
struct DaylightTimeStruct;
}
// Type: System.Globalization::DaylightTimeStruct
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3657))
// CS Name: System.Globalization.DaylightTimeStruct
struct CORDL_TYPE DaylightTimeStruct : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Start", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "End", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "Delta", ty: "System::TimeSpan", modifiers: "", def_value: None }]
constexpr DaylightTimeStruct(System::DateTime Start, System::DateTime End, System::TimeSpan Delta) noexcept;


                    constexpr DaylightTimeStruct(DaylightTimeStruct const&) = default;
                    constexpr DaylightTimeStruct(DaylightTimeStruct&&) = default;
                    constexpr DaylightTimeStruct& operator=(DaylightTimeStruct const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DaylightTimeStruct& operator=(DaylightTimeStruct&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DaylightTimeStruct(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::DateTime __declspec(property(get=__get_Start, put=__set_Start))  Start;

constexpr void __set_Start(System::DateTime value) ;

constexpr System::DateTime __get_Start() const;

 System::DateTime __declspec(property(get=__get_End, put=__set_End))  End;

constexpr void __set_End(System::DateTime value) ;

constexpr System::DateTime __get_End() const;

 System::TimeSpan __declspec(property(get=__get_Delta, put=__set_Delta))  Delta;

constexpr void __set_Delta(System::TimeSpan value) ;

constexpr System::TimeSpan __get_Delta() const;


// Methods

/// @brief Method .ctor addr 0x23e51f8 size 0xc virtual false final false
 void _ctor(System::DateTime start, System::DateTime end, System::TimeSpan delta) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DaylightTimeStruct, "System.Globalization", "DaylightTimeStruct");
